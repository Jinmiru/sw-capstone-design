// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/PackedLevelActor/PackedLevelActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackedLevelActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_ALevelInstance();
ENGINE_API UClass* Z_Construct_UClass_APackedLevelActor();
ENGINE_API UClass* Z_Construct_UClass_APackedLevelActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class APackedLevelActor
void APackedLevelActor::StaticRegisterNativesAPackedLevelActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APackedLevelActor);
UClass* Z_Construct_UClass_APackedLevelActor_NoRegister()
{
	return APackedLevelActor::StaticClass();
}
struct Z_Construct_UClass_APackedLevelActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * APackedLevelActor is the result of packing the source level (WorldAsset base class property) into a single actor. See FPackedLevelActorBuilder.\n * \n * \n * Other components are unsupported and will result in an incomplete APackedLevelActor. In this case using a regular ALevelInstance is recommended.\n */" },
		{ "IncludePath", "PackedLevelActor/PackedLevelActor.h" },
		{ "ModuleRelativePath", "Public/PackedLevelActor/PackedLevelActor.h" },
		{ "ToolTip", "APackedLevelActor is the result of packing the source level (WorldAsset base class property) into a single actor. See FPackedLevelActorBuilder.\n\n\nOther components are unsupported and will result in an incomplete APackedLevelActor. In this case using a regular ALevelInstance is recommended." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackedVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/PackedLevelActor/PackedLevelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackedHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/PackedLevelActor/PackedLevelActor.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PackedVersion;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PackedHash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APackedLevelActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APackedLevelActor_Statics::NewProp_PackedVersion = { "PackedVersion", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APackedLevelActor, PackedVersion), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackedVersion_MetaData), NewProp_PackedVersion_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_APackedLevelActor_Statics::NewProp_PackedHash = { "PackedHash", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APackedLevelActor, PackedHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackedHash_MetaData), NewProp_PackedHash_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APackedLevelActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APackedLevelActor_Statics::NewProp_PackedVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APackedLevelActor_Statics::NewProp_PackedHash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APackedLevelActor_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_APackedLevelActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALevelInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APackedLevelActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APackedLevelActor_Statics::ClassParams = {
	&APackedLevelActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_APackedLevelActor_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_APackedLevelActor_Statics::PropPointers), 0),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APackedLevelActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APackedLevelActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APackedLevelActor()
{
	if (!Z_Registration_Info_UClass_APackedLevelActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APackedLevelActor.OuterSingleton, Z_Construct_UClass_APackedLevelActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APackedLevelActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<APackedLevelActor>()
{
	return APackedLevelActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APackedLevelActor);
APackedLevelActor::~APackedLevelActor() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(APackedLevelActor)
// End Class APackedLevelActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APackedLevelActor, APackedLevelActor::StaticClass, TEXT("APackedLevelActor"), &Z_Registration_Info_UClass_APackedLevelActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APackedLevelActor), 2873745095U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h_2774684823(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
