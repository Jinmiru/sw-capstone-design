// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperTerrainActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTerrainActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_APaperTerrainActor();
PAPER2D_API UClass* Z_Construct_UClass_APaperTerrainActor_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainSplineComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin Class APaperTerrainActor
void APaperTerrainActor::StaticRegisterNativesAPaperTerrainActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaperTerrainActor);
UClass* Z_Construct_UClass_APaperTerrainActor_NoRegister()
{
	return APaperTerrainActor::StaticClass();
}
struct Z_Construct_UClass_APaperTerrainActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An instance of a piece of 2D terrain in the level\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "PaperTerrainActor.h" },
		{ "ModuleRelativePath", "Classes/PaperTerrainActor.h" },
		{ "ToolTip", "An instance of a piece of 2D terrain in the level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sprite,Rendering,Physics,Components|Sprite" },
		{ "ModuleRelativePath", "Classes/PaperTerrainActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DummyRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaperTerrainActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaperTerrainActor, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DummyRoot_MetaData), NewProp_DummyRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaperTerrainActor, SplineComponent), Z_Construct_UClass_UPaperTerrainSplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_RenderComponent = { "RenderComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaperTerrainActor, RenderComponent), Z_Construct_UClass_UPaperTerrainComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderComponent_MetaData), NewProp_RenderComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaperTerrainActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_DummyRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_SplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperTerrainActor_Statics::NewProp_RenderComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaperTerrainActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APaperTerrainActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaperTerrainActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APaperTerrainActor_Statics::ClassParams = {
	&APaperTerrainActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APaperTerrainActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APaperTerrainActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaperTerrainActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APaperTerrainActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APaperTerrainActor()
{
	if (!Z_Registration_Info_UClass_APaperTerrainActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaperTerrainActor.OuterSingleton, Z_Construct_UClass_APaperTerrainActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APaperTerrainActor.OuterSingleton;
}
template<> PAPER2D_API UClass* StaticClass<APaperTerrainActor>()
{
	return APaperTerrainActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APaperTerrainActor);
APaperTerrainActor::~APaperTerrainActor() {}
// End Class APaperTerrainActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APaperTerrainActor, APaperTerrainActor::StaticClass, TEXT("APaperTerrainActor"), &Z_Registration_Info_UClass_APaperTerrainActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaperTerrainActor), 1265044476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_1734882017(TEXT("/Script/Paper2D"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
