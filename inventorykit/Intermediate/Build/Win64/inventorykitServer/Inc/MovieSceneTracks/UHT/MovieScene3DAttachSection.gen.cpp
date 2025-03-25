// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieScene3DAttachSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DAttachSection() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetachmentRule();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DAttachSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DAttachSection_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintSection();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieScene3DAttachSection
void UMovieScene3DAttachSection::StaticRegisterNativesUMovieScene3DAttachSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene3DAttachSection);
UClass* Z_Construct_UClass_UMovieScene3DAttachSection_NoRegister()
{
	return UMovieScene3DAttachSection::StaticClass();
}
struct Z_Construct_UClass_UMovieScene3DAttachSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A 3D Attach section\n */" },
		{ "IncludePath", "Sections/MovieScene3DAttachSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
		{ "ToolTip", "A 3D Attach section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachComponentName_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFullRevertOnDetach_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReAttachOnDetach_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentLocationRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentRotationRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentScaleRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetachmentLocationRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetachmentRotationRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetachmentScaleRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachComponentName;
#if WITH_EDITORONLY_DATA
	static void NewProp_bFullRevertOnDetach_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullRevertOnDetach;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReAttachOnDetach;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttachmentLocationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachmentLocationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttachmentRotationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachmentRotationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttachmentScaleRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachmentScaleRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DetachmentLocationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DetachmentLocationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DetachmentRotationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DetachmentRotationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DetachmentScaleRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DetachmentScaleRule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DAttachSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocketName_MetaData), NewProp_AttachSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachComponentName = { "AttachComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachComponentName_MetaData), NewProp_AttachComponentName_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach_SetBit(void* Obj)
{
	((UMovieScene3DAttachSection*)Obj)->bFullRevertOnDetach = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach = { "bFullRevertOnDetach", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieScene3DAttachSection), &Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFullRevertOnDetach_MetaData), NewProp_bFullRevertOnDetach_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_ReAttachOnDetach = { "ReAttachOnDetach", nullptr, (EPropertyFlags)0x0014000800082008, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, ReAttachOnDetach), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReAttachOnDetach_MetaData), NewProp_ReAttachOnDetach_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule = { "AttachmentLocationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachmentLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentLocationRule_MetaData), NewProp_AttachmentLocationRule_MetaData) }; // 366982490
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule = { "AttachmentRotationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachmentRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentRotationRule_MetaData), NewProp_AttachmentRotationRule_MetaData) }; // 366982490
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule = { "AttachmentScaleRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachmentScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentScaleRule_MetaData), NewProp_AttachmentScaleRule_MetaData) }; // 366982490
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule = { "DetachmentLocationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, DetachmentLocationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetachmentLocationRule_MetaData), NewProp_DetachmentLocationRule_MetaData) }; // 1636836597
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule = { "DetachmentRotationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, DetachmentRotationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetachmentRotationRule_MetaData), NewProp_DetachmentRotationRule_MetaData) }; // 1636836597
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule = { "DetachmentScaleRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, DetachmentScaleRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetachmentScaleRule_MetaData), NewProp_DetachmentScaleRule_MetaData) }; // 1636836597
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene3DAttachSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachComponentName,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_ReAttachOnDetach,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieScene3DAttachSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScene3DConstraintSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieScene3DAttachSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::ClassParams = {
	&UMovieScene3DAttachSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieScene3DAttachSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScene3DAttachSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScene3DAttachSection()
{
	if (!Z_Registration_Info_UClass_UMovieScene3DAttachSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene3DAttachSection.OuterSingleton, Z_Construct_UClass_UMovieScene3DAttachSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScene3DAttachSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DAttachSection>()
{
	return UMovieScene3DAttachSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DAttachSection);
UMovieScene3DAttachSection::~UMovieScene3DAttachSection() {}
// End Class UMovieScene3DAttachSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DAttachSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene3DAttachSection, UMovieScene3DAttachSection::StaticClass, TEXT("UMovieScene3DAttachSection"), &Z_Registration_Info_UClass_UMovieScene3DAttachSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene3DAttachSection), 2834686424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DAttachSection_h_4121493182(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DAttachSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DAttachSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
