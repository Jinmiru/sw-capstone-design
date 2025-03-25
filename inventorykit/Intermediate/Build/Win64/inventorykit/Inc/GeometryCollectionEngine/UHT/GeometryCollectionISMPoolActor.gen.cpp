// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionISMPoolActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionISMPoolActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionISMPoolActor();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionISMPoolActor_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionISMPoolComponent_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References

// Begin Class AGeometryCollectionISMPoolActor
void AGeometryCollectionISMPoolActor::StaticRegisterNativesAGeometryCollectionISMPoolActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometryCollectionISMPoolActor);
UClass* Z_Construct_UClass_AGeometryCollectionISMPoolActor_NoRegister()
{
	return AGeometryCollectionISMPoolActor::StaticClass();
}
struct Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionISMPoolActor.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionISMPoolActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ISMPoolComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ISMPoolActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionISMPoolActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ISMPoolDebugDrawComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ISMPoolActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionISMPoolActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ISMPoolComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ISMPoolDebugDrawComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryCollectionISMPoolActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::NewProp_ISMPoolComp = { "ISMPoolComp", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionISMPoolActor, ISMPoolComp), Z_Construct_UClass_UGeometryCollectionISMPoolComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ISMPoolComp_MetaData), NewProp_ISMPoolComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::NewProp_ISMPoolDebugDrawComp = { "ISMPoolDebugDrawComp", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionISMPoolActor, ISMPoolDebugDrawComp), Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ISMPoolDebugDrawComp_MetaData), NewProp_ISMPoolDebugDrawComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::NewProp_ISMPoolComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::NewProp_ISMPoolDebugDrawComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::ClassParams = {
	&AGeometryCollectionISMPoolActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGeometryCollectionISMPoolActor()
{
	if (!Z_Registration_Info_UClass_AGeometryCollectionISMPoolActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometryCollectionISMPoolActor.OuterSingleton, Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGeometryCollectionISMPoolActor.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<AGeometryCollectionISMPoolActor>()
{
	return AGeometryCollectionISMPoolActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryCollectionISMPoolActor);
AGeometryCollectionISMPoolActor::~AGeometryCollectionISMPoolActor() {}
// End Class AGeometryCollectionISMPoolActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGeometryCollectionISMPoolActor, AGeometryCollectionISMPoolActor::StaticClass, TEXT("AGeometryCollectionISMPoolActor"), &Z_Registration_Info_UClass_AGeometryCollectionISMPoolActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometryCollectionISMPoolActor), 1126993348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolActor_h_518571969(TEXT("/Script/GeometryCollectionEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
