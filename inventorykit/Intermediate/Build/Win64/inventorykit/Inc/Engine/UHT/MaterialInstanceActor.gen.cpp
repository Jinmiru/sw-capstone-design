// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AMaterialInstanceActor();
ENGINE_API UClass* Z_Construct_UClass_AMaterialInstanceActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AMaterialInstanceActor
void AMaterialInstanceActor::StaticRegisterNativesAMaterialInstanceActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMaterialInstanceActor);
UClass* Z_Construct_UClass_AMaterialInstanceActor_NoRegister()
{
	return AMaterialInstanceActor::StaticClass();
}
struct Z_Construct_UClass_AMaterialInstanceActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Movement Advanced Collision Display Actor Attachment" },
		{ "IncludePath", "Materials/MaterialInstanceActor.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActors_MetaData[] = {
		{ "Category", "MaterialInstanceActor" },
		{ "Comment", "/** Pointer to actors that we want to control paramters of using Matinee. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceActor.h" },
		{ "ToolTip", "Pointer to actors that we want to control paramters of using Matinee." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaterialInstanceActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors_Inner = { "TargetActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors = { "TargetActors", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaterialInstanceActor, TargetActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActors_MetaData), NewProp_TargetActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMaterialInstanceActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialInstanceActor_Statics::NewProp_TargetActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialInstanceActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMaterialInstanceActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialInstanceActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMaterialInstanceActor_Statics::ClassParams = {
	&AMaterialInstanceActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMaterialInstanceActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialInstanceActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialInstanceActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMaterialInstanceActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMaterialInstanceActor()
{
	if (!Z_Registration_Info_UClass_AMaterialInstanceActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMaterialInstanceActor.OuterSingleton, Z_Construct_UClass_AMaterialInstanceActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMaterialInstanceActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AMaterialInstanceActor>()
{
	return AMaterialInstanceActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMaterialInstanceActor);
AMaterialInstanceActor::~AMaterialInstanceActor() {}
// End Class AMaterialInstanceActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMaterialInstanceActor, AMaterialInstanceActor::StaticClass, TEXT("AMaterialInstanceActor"), &Z_Registration_Info_UClass_AMaterialInstanceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMaterialInstanceActor), 310092958U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceActor_h_2440249805(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
