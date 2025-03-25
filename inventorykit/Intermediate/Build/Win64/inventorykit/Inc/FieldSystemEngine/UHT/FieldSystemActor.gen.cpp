// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldSystemActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_AFieldSystemActor();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_AFieldSystemActor_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FieldSystemEngine();
// End Cross Module References

// Begin Class AFieldSystemActor
void AFieldSystemActor::StaticRegisterNativesAFieldSystemActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFieldSystemActor);
UClass* Z_Construct_UClass_AFieldSystemActor_NoRegister()
{
	return AFieldSystemActor::StaticClass();
}
struct Z_Construct_UClass_AFieldSystemActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "IncludePath", "Field/FieldSystemActor.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldSystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Field" },
		{ "Comment", "/* FieldSystemComponent */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Components|FieldSystem" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemActor.h" },
		{ "ToolTip", "FieldSystemComponent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FieldSystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFieldSystemActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFieldSystemActor_Statics::NewProp_FieldSystemComponent = { "FieldSystemComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFieldSystemActor, FieldSystemComponent), Z_Construct_UClass_UFieldSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldSystemComponent_MetaData), NewProp_FieldSystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFieldSystemActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFieldSystemActor_Statics::NewProp_FieldSystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFieldSystemActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFieldSystemActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFieldSystemActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFieldSystemActor_Statics::ClassParams = {
	&AFieldSystemActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFieldSystemActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFieldSystemActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFieldSystemActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFieldSystemActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFieldSystemActor()
{
	if (!Z_Registration_Info_UClass_AFieldSystemActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFieldSystemActor.OuterSingleton, Z_Construct_UClass_AFieldSystemActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFieldSystemActor.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<AFieldSystemActor>()
{
	return AFieldSystemActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFieldSystemActor);
AFieldSystemActor::~AFieldSystemActor() {}
// End Class AFieldSystemActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFieldSystemActor, AFieldSystemActor::StaticClass, TEXT("AFieldSystemActor"), &Z_Registration_Info_UClass_AFieldSystemActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFieldSystemActor), 1278999327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemActor_h_3851863120(TEXT("/Script/FieldSystemEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
