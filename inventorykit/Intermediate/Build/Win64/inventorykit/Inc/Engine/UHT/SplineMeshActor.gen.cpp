// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SplineMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineMeshActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ASplineMeshActor();
ENGINE_API UClass* Z_Construct_UClass_ASplineMeshActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ASplineMeshActor
void ASplineMeshActor::StaticRegisterNativesASplineMeshActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASplineMeshActor);
UClass* Z_Construct_UClass_ASplineMeshActor_NoRegister()
{
	return ASplineMeshActor::StaticClass();
}
struct Z_Construct_UClass_ASplineMeshActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "Comment", "/**\n * SplineMeshActor is an actor with a SplineMeshComponent.\n *\n * @see USplineMeshComponent\n */" },
		{ "HideCategories", "Input" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/SplineMeshActor.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "SplineMeshActor is an actor with a SplineMeshComponent.\n\n@see USplineMeshComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SplineMeshActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh,Components|SplineMesh" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplineMeshActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineMeshActor_Statics::NewProp_SplineMeshComponent = { "SplineMeshComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplineMeshActor, SplineMeshComponent), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMeshComponent_MetaData), NewProp_SplineMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASplineMeshActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMeshActor_Statics::NewProp_SplineMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMeshActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASplineMeshActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMeshActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASplineMeshActor_Statics::ClassParams = {
	&ASplineMeshActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASplineMeshActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMeshActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMeshActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASplineMeshActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASplineMeshActor()
{
	if (!Z_Registration_Info_UClass_ASplineMeshActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASplineMeshActor.OuterSingleton, Z_Construct_UClass_ASplineMeshActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASplineMeshActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ASplineMeshActor>()
{
	return ASplineMeshActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASplineMeshActor);
ASplineMeshActor::~ASplineMeshActor() {}
// End Class ASplineMeshActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASplineMeshActor, ASplineMeshActor::StaticClass, TEXT("ASplineMeshActor"), &Z_Registration_Info_UClass_ASplineMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASplineMeshActor), 3095409669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h_3558593469(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
